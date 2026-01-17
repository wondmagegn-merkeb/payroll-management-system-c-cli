# Payroll Management System (C++ CLI)

A console-based **Payroll Management System** built in C++ to efficiently manage employee records, calculate salaries, taxes, pensions, and net pay, with persistent data storage and dynamic system capacity.

---

## 🛠️ Features

### Employee Records
- **Add Employee** – Store personal and job-related details.
- **Edit Employee** – Update name, gender, birth date, phone, address, and salary details.
- **Delete Employee** – Remove a specific employee or all records.
- **Search Employee** – Search by ID and view detailed payroll information.
- **List Employees** – Display all employees with ID, Name, Gender, Age, and Net Pay.

### Salary Calculations
- **Basic Salary** = Hours × Days × Pay/hour
- **Pension** – 10% of basic salary
- **Transport Allowance** – Fixed 300
- **Tax** – Calculated based on Ethiopian tax brackets
- **Net Pay** = Total Gross – Deductions

### Additional Features
- **Age Calculation** – Computes age from birth date and current date.
- **Data Persistence** – Saves and loads data from `payroll.txt`.
- **Dynamic Capacity Expansion** – Add more employee slots beyond the default (300).

---

## 📁 Project Structure

