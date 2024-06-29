
# CIS150: University Course Management System

## Student Name and Email
Leah Mirch (lmirch@umich.edu)

## Introduction
This project is a University Course Management System implemented as part of CS150. The main goal is to manage university course details such as campus location, course credits, instructor information, meeting times, and student enrollments. The application is built using C++ and reads course data from an external file (`textFile.txt`).

## Running Instructions
### Prerequisites
- C++ compiler (e.g., g++)

### Compilation and Execution
1. Open a terminal and navigate to the project directory.
2. Compile the program using:
   ```bash
   g++ -o university_course_management main.cpp
   ```
3. Run the compiled program:
   ```bash
   ./university_course_management
   ```

### Input File: textFile.txt
Example content of `textFile.txt`:
```
Dearborn
4
CECS
150
003
Tuesday
9:00AM
HPEC
1190
20
```

### Program Execution
The user will be prompted to enter additional course details such as the course instructor's name, the number of students to enroll, and the course status.

## UML Class Diagram
### Class University
- **Methods:**
  - `void setCampus(string s)`
  - `void setNumberCredit(int n)`
  - `void setCourseIdentification(string n)`
  - `void setDepartmentCourse(int n, int m)`
  - `void setCourseInstructor(string s)`
  - `void setDay(string s)`
  - `void setTime(string s)`
  - `void setBuilding(string s)`
  - `void setRoomNum(string s)`
  - `void setMaxEnroll(int n)`
  - `void setNStudent(int n)`
  - `void setCourseStatus(string s)`
  - `void display()`
- **Attributes:**
  - `string campus`
  - `int numberCredit`
  - `string courseIdentification`
  - `int departmentCourseId[2]`
  - `string courseInstructor`
  - `string Days`
  - `string Time`
  - `string building`
  - `string roomNum`
  - `int maxEnroll`
  - `int nS`
  - `string nStudent[100000]`
  - `string courseStatus`

## Implementation Details
The `university` class manages course details and student enrollments. The main function reads data from `textFile.txt`, initializes a `university` object, sets its attributes, and prompts the user for additional input before displaying the course details.

## Additional Information
This project demonstrates file I/O operations, class usage, and object-oriented programming in C++. It provides a practical application of managing and displaying course details in a university setting.
