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

