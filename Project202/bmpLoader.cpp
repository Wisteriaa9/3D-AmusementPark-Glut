#include "BmpLoader.h"
#include <iostream>
#include <fstream>

BmpLoader::BmpLoader(const char* filename)
{
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open())
    {
        std::cerr << "BMP File not found" << std::endl; // Use std::cerr for error messages
        return;
    }

    file.read(reinterpret_cast<char*>(&bfh), sizeof(BITMAPFILEHEADER));
    if (bfh.bfType != 0x4D42)
    {
        std::cerr << "Not a valid bitmap" << std::endl;
        file.close(); // Close file before returning in case of error
        return;
    }

    file.read(reinterpret_cast<char*>(&bih), sizeof(BITMAPINFOHEADER));
    if (bih.biSizeImage == 0)
        bih.biSizeImage = bih.biHeight * bih.biWidth * 3;

    textureData = new unsigned char[bih.biSizeImage];
    file.seekg(bfh.bfOffBits, std::ios::beg);
    file.read(reinterpret_cast<char*>(textureData), bih.biSizeImage);

    // Swap red and blue channels
    for (int i = 0; i < bih.biSizeImage; i += 3)
    {
        unsigned char temp = textureData[i];
        textureData[i] = textureData[i + 2];
        textureData[i + 2] = temp;
    }
    iWidth = bih.biWidth;
    iHeight = bih.biHeight;

    file.close();
}

BmpLoader::~BmpLoader()
{
    delete[] textureData;
}
