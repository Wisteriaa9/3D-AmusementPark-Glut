
# 3D-AmusementPark-Glut

## Overview
This project is a 3D simulation of an amusement park built using OpenGL. The simulation includes various 3D models and interactive elements, showcasing different amusement park rides and attractions. The project serves as an introduction to 3D graphics programming and offers an engaging way to learn the fundamentals of OpenGL.

## Features
- **3D Environment:** The amusement park is rendered in a 3D space, with realistic lighting and textures.
- **Rides:** The park includes various rides like Ferris wheels, roller coasters, and carousels, each animated to simulate real-life motion.
- **Camera Controls:** Users can navigate through the park using different camera views, including first-person and third-person perspectives.
- **Interactive Elements:** Some rides and attractions can be interacted with, such as starting and stopping a ride or changing the viewpoint.
- **Lighting and Shadows:** The park features dynamic lighting and shadow effects to enhance the realism of the environment.
- **Texturing:** Textures are applied to objects within the park to provide a more detailed and realistic appearance.

## Prerequisites
To run this project, you need to have the following installed:

- **Programming language used:** C++.
- **OpenGL:** The core library used for rendering 3D graphics.
- **GLUT (OpenGL Utility Toolkit):** A toolkit for handling window creation, input, and other tasks.
- **C++ Compiler:** The project is written in C++, so you will need a compatible compiler (e.g., GCC or Visual Studio).

## Installation
- **Windows:** Use Visual Studio or Code::Blocks with the necessary OpenGL libraries.
- **Linux:** Install the required libraries using your package manager (e.g., sudo apt-get install freeglut3-dev) 
- **MacOS:** Xcode includes OpenGL, but you may need to install additional libraries like GLEW.

### Setup and Compilation
**Windows (Visual Studio)**

1. Create a new project in Visual Studio.
2. Add the OpenGL, GLUT, and GLEW libraries to your project.
3. Add the source files to the project.
4. Configure the project settings to link with the OpenGL libraries.
5. Build and run the project.

####
**Linux** 

1. You can install the required libraries:
```bash
  sudo apt-get install freeglut3-dev glew-utils
```
2. Compile the project using g++:
```bash
  g++ main.cpp -lGL -lGLU -lglut -lGLEW -o 3DAmusementPark
```
3. Run the executable:
```bash
./3DAmusementPark
```
 
####
**MacOS**
1. Use Xcode to create a new project and link the necessary libraries.
2. Add the source files and compile the project.

## Future Improvements

- More Rides: Add more attractions and expand the park.
- Enhanced Interactivity: Implement more user interactions, such as entering rides or customizing the park.
- Improved Physics: Introduce realistic physics to simulate ride motion and collisions.

## Controls
Following position can be controlled using respective keys

**Camera Position:**

- Zoom In: i
- Zoom Out: o
- Camera Down: y
- Camera Up: Y
- Camera Left: x
- Camera Right: X
- Reset to Default Position: b

**Look At Point:**

- Look Right: r
- Look Left: l

**Light Controls:**

- Toggle Light 1: L
- Toggle Light 2: K

**Ride Controls:**

- Ferris Wheel: 1
- Ride One: 2
- Cable Car Ride: 3
- Sky Drop Ride: 4
- Plane Ride: 5
- Ride Three: 6

## Screenshots

![Amus1](https://github.com/user-attachments/assets/441e92a0-98e6-4aad-bbc5-03d4f016fec9)

![Amus2](https://github.com/user-attachments/assets/c09da216-937e-4c97-963b-26d4ae320fbd)




