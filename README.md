# SystemControl++

SystemControl++ is a modular C++ system simulator designed to look like a large-scale project while remaining fully beginner-friendly.  
It imitates core system functionalities such as file management, process handling, system monitoring, user control, and utility tools — all implemented with simple C++ concepts.

---

## 📘 Overview

SystemControl++ provides a structured environment where each system component is separated into its own module.  
This makes the project easy to understand, easy to expand, and ideal for learning modular C++ architecture.

The project focuses on:
- clean and readable code  
- modular design  
- basic file handling  
- struct-based data simulation  
- building a “big” project using simple C++  

---

## 🚀 Features

### 📁 File Manager
- Create files  
- Delete files  
- List files (demo)  
- Operates inside the `data/` directory  

### ⚙️ Process Manager
- Create simulated processes  
- List processes  
- Kill processes  
- Demonstrates struct-based data handling  

### 📊 System Monitor
- Simulated CPU usage  
- Simulated RAM usage  
- System uptime  
- System-style output  

### 👤 User Manager
- Create users  
- Login system  
- Basic permissions  
- Stores data in `users.db`  

### 🧰 Tools
- Calculator  
- Password generator  
- Caesar cipher encryption  
- Misc utilities  

---

## 🏗️ Project Structure

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

---

## 🔧 Build Instructions

### Compile
```bash
g++ src/*.cpp -I include -o SystemControlPP
Run
bash
./SystemControlPP
🕹️ Usage Guide
When you start the program, you will see the main menu with all available modules:

Code
1. File Manager
2. Process Manager
3. System Monitor
4. User Manager
5. Tools
0. Exit
Choose a number to enter a module.

📂 Module Descriptions
📁 File Manager
The File Manager allows you to:

create files

delete files

list files (demo)

All files are stored inside the data/ folder.
This module demonstrates basic file handling in C++.

⚙️ Process Manager
The Process Manager simulates processes using simple C++ structs.
You can:

create a simulated process

list all processes

remove (kill) a process

This module demonstrates struct-based data simulation.

📊 System Monitor
The System Monitor displays simulated system information:

CPU load

RAM usage

system uptime

This module imitates system-style output without using OS-level APIs.

👤 User Manager
The User Manager handles basic user accounts.
You can:

create users

log in

list users

User data is stored in a simple text-based database (users.db).

🧰 Tools
The Tools module includes:

a basic calculator

a password generator

Caesar cipher encryption

miscellaneous utilities

This module demonstrates simple algorithmic logic.

🧱 Code Philosophy
SystemControl++ is built with simplicity and clarity in mind.
The project avoids advanced libraries and focuses on:

modularity

readability

expandability

basic C++ only

simulated systems instead of complex implementations

This makes it perfect for beginners who want to build a “big” project without advanced knowledge.

📌 Future Improvements
Real file listing

Real process management using threads

Real system monitoring

GUI version (Qt)

Networking module

📜 License
MIT License — free to use and modify.

