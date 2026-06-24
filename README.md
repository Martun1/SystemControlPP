📘 SystemControl++ — Documentation
🖥️ Overview
SystemControl++ is a basic yet large‑scale C++ project that simulates a simplified operating‑system‑like environment.
It is built with a clean modular architecture, beginner‑friendly code, and a structure that makes the project look professional and scalable.

The goal of this project is to practice:

modular C++ design

file handling

struct‑based data simulation

clean architecture

building a “big” project using only basic C++ concepts

🚀 Features
📁 File Manager
Create files

Delete files

List files (demo)

Works inside the data/ directory

⚙️ Process Manager
Create simulated processes

List processes

Kill processes

Demonstrates struct‑based data handling

📊 System Monitor
Simulated CPU usage

Simulated RAM usage

System uptime

Demonstrates system‑style output

👤 User Manager
Create users

Login system

Basic permissions

Stores data in users.db

🧰 Tools
Calculator

Password generator

Caesar cipher encryption

Misc utilities

🏗️ Project Structure
Code
SystemControlPP/
├─ src/
│  ├─ main.cpp
│  ├─ file_manager.cpp
│  ├─ process_manager.cpp
│  ├─ system_monitor.cpp
│  ├─ user_manager.cpp
│  ├─ tools.cpp
│  └─ utils.cpp
├─ include/
│  ├─ file_manager.h
│  ├─ process_manager.h
│  ├─ system_monitor.h
│  ├─ user_manager.h
│  ├─ tools.h
│  └─ utils.h
├─ data/
│  ├─ users.db
│  ├─ processes.db
│  └─ logs.txt
├─ README.md
└─ CMakeLists.txt
🔧 Build Instructions
Compile
bash
g++ src/*.cpp -I include -o SystemControlPP
Run
bash
./SystemControlPP
🕹️ Usage Guide
Main Menu
When you start the program, you will see:

Code
1. File Manager
2. Process Manager
3. System Monitor
4. User Manager
5. Tools
0. Exit
Choose a module by entering its number.

File Manager
Code
1. List files
2. Create file
3. Delete file
0. Back
Files are created inside the data/ folder.

Process Manager
Simulates processes using simple structs.

Code
1. List processes
2. Create process
3. Kill process
0. Back
System Monitor
Displays simulated system information:

CPU load

RAM usage

Uptime

User Manager
Handles basic user accounts.

Code
1. Create user
2. Login
3. List users
0. Back
Tools
Code
1. Calculator
2. Password generator
3. Caesar cipher
0. Back
🧱 Code Philosophy
Modular — each module has its own .cpp and .h

Readable — clean, beginner‑friendly code

Expandable — easy to add new modules

Basic C++ only — no advanced libraries required

Simulated systems — looks big, stays simple

📌 Future Improvements
Real file listing

Real process management using threads

Real system monitoring

GUI version (Qt)

Networking module

📜 License
MIT License — free to use and modify.
