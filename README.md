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
