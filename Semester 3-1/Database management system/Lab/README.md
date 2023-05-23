``` sql
CREATE DATABASE BHSDBMS;

USE bhsdbms;

CREATE TABLE room (
    room_id CHAR(4) PRIMARY KEY NOT NULL,
    occupancy_status INT,
    floor_number INT,
    block_number CHAR(1)
);

CREATE TABLE student (
    student_id CHAR(10) PRIMARY KEY NOT NULL,
    first_name VARCHAR(25) NOT NULL,
    last_name VARCHAR(25),
    department VARCHAR(20) NOT NULL,
    semester CHAR(4) NOT NULL,
    phone CHAR(11) NOT NULL,
    email VARCHAR(30) NOT NULL,
    date_of_birth DATE,
    fathers_name VARCHAR(25),
    mothers_name VARCHAR(25),
    present_address VARCHAR(25),
    permanent_address VARCHAR(25),
    guardians_phone CHAR(11),
    room_id CHAR(4),
    FOREIGN KEY(room_id) REFERENCES room(room_id)
);

CREATE TABLE complaint (
    complaint_type VARCHAR(15),
    complaint_description TEXT NOT NULL,
    date_received DATE,
    date_resolved DATE,
    student_id CHAR(10),
    FOREIGN KEY(student_id) REFERENCES student(student_id) 
);

CREATE TABLE visitor (
    visitor_name VARCHAR(25),
    phone CHAR(11),
    entry_time DATETIME DEFAULT NOW(),
    exit_time DATETIME,
    student_id CHAR(10),
    FOREIGN KEY (student_id) REFERENCES student(student_id)
);
```
