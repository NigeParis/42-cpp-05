# Exercise 00: Mommy, When I Grow Up, I Want to Be a Bureaucrat!

This exercise focuses on designing a `Bureaucrat` class in C++ to simulate the structure and constraints of a bureaucratic system. The aim is to build a class with specific attributes, methods, and exception handling mechanisms.

---

## **Objective**

To create a `Bureaucrat` class with the following characteristics:
- A constant `name` assigned during construction.
- A `grade` attribute with a valid range of 1 (highest) to 150 (lowest).

The exercise also emphasizes:
- Exception handling using custom exceptions (`GradeTooHighException` and `GradeTooLowException`).
- Following the Orthodox Canonical Form for class design.
- Implementing an overloaded `<<` operator for formatted output.

---

## **Specifications**

### **Attributes**
- **Name**: A constant string that cannot be modified after construction.
- **Grade**: An integer representing the grade of the bureaucrat, constrained within the range of 1 to 150.

### **Member Functions**
1. **Getters**:
   - `getName()`: Returns the name of the bureaucrat.
   - `getGrade()`: Returns the current grade.

2. **Modifiers**:
   - `incrementGrade()`: Decreases the grade by 1 (e.g., grade 3 becomes grade 2).
   - `decrementGrade()`: Increases the grade by 1 (e.g., grade 2 becomes grade 3).

3. **Grade Constraints**:
   - If a grade goes below 1, a `GradeTooHighException` is thrown.
   - If a grade goes above 150, a `GradeTooLowException` is thrown.

### **Overloaded Operators**
- Overload the `<<` operator to allow formatted output:


### **Exception Handling**
- Demonstrate exceptions in the `main.cpp` file using `try` and `catch` blocks:
```cpp
try {
    Bureaucrat john("John", 1);
    john.incrementGrade(); // Throws GradeTooHighException
} catch (const std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
}
```

# CPP Module 05 - Exercise 01: Form up, maggots!

Welcome to Exercise 01 of CPP Module 05. This exercise builds upon the previous one by introducing the concept of forms that can be signed and executed by bureaucrats. The goal is to implement a robust and exception-safe system to handle this process.

---

## Exercise Overview

In this exercise, you will:
- Create and manage a **Form** class.
- Implement validation mechanisms with custom exceptions: `GradeTooHighException` and `GradeTooLowException`.
- Handle form signing using the `Bureaucrat` class from the previous exercise.
- Throw and catch exceptions to manage edge cases gracefully.

---

## Class Design

### Form Class

The `Form` class has the following attributes:
- `name` (constant `std::string`): The name of the form.
- `isSigned` (boolean): Indicates whether the form is signed (default: `false` at construction).
- `gradeToSign` (constant `int`): The grade required to sign the form.
- `gradeToExecute` (constant `int`): The grade required to execute the form.

### Exceptions
You will define two exceptions within the `Form` class:
- `GradeTooHighException`: Thrown when a grade is too high.
- `GradeTooLowException`: Thrown when a grade is too low.

---

## Member Functions

1. **Constructor**:
   - Initialize all private attributes and ensure that the grades are within the valid range.

2. **`beSigned(Bureaucrat &bureaucrat)`**:
   - Updates the `isSigned` status if the `Bureaucrat`'s grade is high enough.
   - Throws a `GradeTooLowException` if the grade is insufficient.

3. **Getters**:
   - Provide access to all private attributes (`getName()`, `getIsSigned()`, `getGradeToSign()`, `getGradeToExecute()`).

4. **Overloaded `<<` Operator**:
   - Outputs all the form's attributes in a human-readable format.

---

## Bureaucrat Integration

Update the `Bureaucrat` class:
- Modify the `signForm()` function to use `Form::beSigned()`:
  - Print a message if the form is successfully signed.
  - Print an error message with the reason if the signing fails.
