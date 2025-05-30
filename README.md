# 🚀 C++ REST API with MySQL using Crow & Visual Studio 2022

This project is a modern C++ REST API that uses the **Crow** framework to serve JSON over HTTP, with **MySQL** as the backend database. It is designed to be compiled using **Visual Studio 2022** and makes use of standard C++17 features.

---

## 📌 Features

- 🌐 RESTful endpoint (`/users`)
- 📊 MySQL database integration
- 🧱 Clean and modular C++ OOP structure
- 🛠 Built in Visual Studio 2022
- 🔁 JSON output using Crow’s JSON library

---

## 🧰 Prerequisites

Before you begin, ensure you have the following tools and libraries installed:

---

### 🧱 Development Tools

- ✅ **Visual Studio 2022** (with C++ Desktop Development workload)  
  📥 [Download Visual Studio 2022](https://visualstudio.microsoft.com/downloads/)

- ✅ **C++17 Enabled**  
  ➤ Set C++17 in your project settings:  
  `Project → Properties → C/C++ → Language → C++ Language Standard → ISO C++17 (/std:c++17)`

---

### 🐬 Database & Connector

- ✅ **MySQL Server** (Localhost database for storing users)  
  📥 [Download MySQL Community Server](https://dev.mysql.com/downloads/mysql/)

- ✅ **MySQL Connector/C++** (Required for C++-MySQL integration)  
  📥 [Download MySQL Connector/C++](https://dev.mysql.com/downloads/connector/cpp/)

---

### 🌐 C++ Web Framework

- ✅ **Crow C++ Framework**  
  Single header REST API framework for C++  
  📥 [Download crow_all.h](https://github.com/CrowCpp/crow/releases)  
  🔗 [View Crow on GitHub](https://github.com/CrowCpp/crow)

> 📌 Place `crow_all.h` in your project folder or configure your include path.

---

### 🛠️ Optional Tools

- 🧪 **Postman** (For testing your API)  
  📥 [Download Postman](https://www.postman.com/downloads/)

---

✅ Once you have all these installed and configured, you're ready to start building your REST API project with C++ and MySQL!


## 🧩 Visual Studio 2022 Configuration (Step-by-Step)

To successfully build and run this project in Visual Studio 2022, follow these configuration steps carefully:

---

### ✅ Step 1: Enable C++17

- Go to:  
  `Project → Properties → C/C++ → Language → C++ Language Standard`
- Set the value to:  

![language](https://github.com/user-attachments/assets/eaa191af-bbcd-41b1-915b-bf4bd1916105)


---

### ✅ Step 2: Add Include Directories

- Go to:  
`Project → Properties → C/C++ → General → Additional Include Directories`
- Add the paths for:
- The folder containing `crow_all.h`
- MySQL Connector/C++ `include` folder

![general1](https://github.com/user-attachments/assets/fde52c70-69a1-43eb-b468-fd8829bf39fb)
![general2](https://github.com/user-attachments/assets/fb09914e-c023-4dbe-b07c-6f92479e3654)


---

### ✅ Step 3: Add Library Directories

- Go to:  
`Project → Properties → Linker → General → Additional Library Directories`
- Add the path to the MySQL Connector/C++ `lib` folder

![linkergeneral](https://github.com/user-attachments/assets/8869aeca-9ae5-4c74-ac49-6b4b8af99a2f)


---

### ✅ Step 4: Link Required Libraries

- Go to:  
`Project → Properties → Linker → Input → Additional Dependencies`
- Add:


![linkinput](https://github.com/user-attachments/assets/59578f65-ded0-4545-97d7-e668977c9420)


---

### ✅ Step 5: Preprocessor Definitions

- Go to:  
  `Project → Properties → C/C++ → Preprocessor → Preprocessor Definitions`
- Add the following definition:
![preprocessor ](https://github.com/user-attachments/assets/1180e859-2849-402d-beee-8c716140c7a8)



## 🗃️ Project Structure

![image](https://github.com/user-attachments/assets/844bd356-5de2-4015-9d23-c22a169cb1dd)

---

## 🏗️ MySQL Setup

1. Launch your MySQL server.
2. Create the database and table:

```sql
CREATE DATABASE pro1;

USE pro1;

CREATE TABLE user (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    email VARCHAR(100)
);

INSERT INTO user (name, email) VALUES
('Usama Mukhtar', 'usama@example.com'),
('Ali Khan', 'ali@example.com');

``` 




**M. Usama Mukhtar**  
🎓 Computer Science Student | Full Stack Developer  
🏢 Currently at: **Pismida**  
🎯 Passionate about building software that empowers people and creates opportunities for young Pakistanis to thrive in tech.

📧 Email: [f2024-0844@bnu.edu.pk](mailto:f2024-0844@bnu.edu.pk)  
📱 Phone: `03126336271`  
🌐 GitHub: [github.com/usamamukhtar](https://github.com/usamamukhtar) *(add your actual username if different)*  
📍 Location: Lahore, Pakistan

---

> “Empowering the next generation of developers through innovation and education.”  
