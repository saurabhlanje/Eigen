Sure, here are the step-by-step instructions for using QT with Visual Studio Code (VS Code) in Ubuntu:

## Install QT

1. Open a terminal window.
2. Type the following command to install the QT development files and libraries:

   ```
   sudo apt-get install qt5-default
   ```

## Install the QT Extension for VS Code

1. Open VS Code.
2. Click on the Extensions tab in the left sidebar.
3. Search for "QT for VS Code" and install the extension.

## Create a New QT Project

1. Open a terminal window.
2. Navigate to the directory where you want to create the new QT project.
3. Type the following command to create a new `.pro` file for your project:

   ```
   qmake -project
   ```

## Open the QT Project in VS Code

1. Open VS Code.
2. Click on the File menu and select Open Folder.
3. Select the directory where your QT project is located.

## Configure the Project for Building

1. Open the `project.pro` file in VS Code.
2. Add the following lines to configure the project for building with VS Code:

   ```
   CONFIG += c++11
   QT += widgets
   SOURCES += main.cpp
   HEADERS += mainwindow.h
   FORMS += mainwindow.ui
   ```

## Build the Project

1. Open a terminal window.
2. Navigate to the directory where your project is located.
3. Type the following command to build the project:

   ```
   qmake
   make
   ```

## Run the Project

1. Open a terminal window.
2. Navigate to the directory where your project is located.
3. Type the following command to run the project:

   ```
   ./project
   ```

These steps should help you set up a basic QT project in VS Code on Ubuntu. However, depending on your specific needs and project requirements, you may need to configure additional settings or use different commands.
