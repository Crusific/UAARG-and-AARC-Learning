// ==============================
// JAVASCRIPT BASICS
// ==============================

// 1. VARIABLES

//You can initialize a variable in JS using var

var a;

//To declare a value for this variable, you can do the following.

a = 10;

//When declaring a variable in Java Script, the language infers the type of the variable itself
//but once declared, you can not change the type of the variable

//You can declare a variable in any type while initilizing it using let

let age = 20;
let name = "John";
let height = 1.75;

//In Java Script, there are 2 types of variables, Read only, and Read and Write Variables.
//using var and let allows you to make Read and Write variables
//using const lets you make Read only variables.


const pi = 3.14159;

console.log(name);
console.log(age);
console.log(height);
console.log(pi);

//console.log acts like a print statement in JS which allows you to print something to the console

// 2. BASIC MATH
let x = 10;
let y = 3;

console.log(x + y); // Addition
console.log(x - y); // Subtraction
console.log(x * y); // Multiplication
console.log(x / y); // Division
console.log(x % y); // Remainder

//Your print will print out the result of any operations you give it

// 3. IF / ELSE
let grade = 75;

//if statements need an argument, you can chain them with else if, and end the chain with an else. The else doesnt need an argument
//the else will take all other outputs than the ones described.

if (grade >= 90) {
    console.log("A");
} else if (grade >= 80) {
    console.log("B");
} else if (grade >= 70) {
    console.log("C");
} else {
    console.log("Below C");
}


// 4. FOR LOOP

//the loop needs 3 arguments, the initializing argument, the conditional argument, and the post argument
//the initilizing only happens once at the start of the loop
//the conditional argument checks for completion, if not, it enters the body of the loop and executes the code
//the post argument only comes into play after the code in the body has been executed

for (let i = 0; i < 5; i++) {
    console.log("For loop:", i);
}


// 5. WHILE LOOP

//same as for loop, but initilizing is done before, conditional is the only argument
//post argument is added at the bottom of the body if necessary.

let i = 0;

while (i < 5) {
    console.log("While loop:", i);
    i++;
}


// 6. FUNCTIONS
function add(a, b) {
    return a + b;
}

let result = add(5, 3);

console.log("5 + 3 =", result);


// 7. ARROW FUNCTIONS
const multiply = (a, b) => {
    return a * b;
};

console.log("5 * 3 =", multiply(5, 3));


// Short arrow function
const subtract = (a, b) => a - b;

console.log("5 - 3 =", subtract(5, 3));


// 8. ARRAYS
let numbers = [10, 20, 30, 40];

console.log(numbers[0]); // First item

numbers.push(50); // Add an item

console.log(numbers);

for (let number of numbers) {
    console.log(number);
}


// 9. OBJECTS
let student = {
    name: "John",
    age: 20,
    major: "Computer Science"
};

console.log(student.name);
console.log(student.age);
console.log(student.major);

// Change a property
student.age = 21;

console.log(student.age);


// 10. STRINGS
let username = "John";

console.log("Hello " + username);

// Template literal
console.log(Hello ${username});


// 11. BOOLEAN VALUES
let isStudent = true;
let isWorking = false;

console.log(isStudent);
console.log(isWorking);


// 12. COMPARISONS
let a = 10;
let b = 5;

console.log(a > b);    // true
console.log(a < b);    // false
console.log(a >= 10);  // true
console.log(a === 10); // true
console.log(a !== b);  // true


// 13. LOGICAL OPERATORS
let hasID = true;
let oldEnough = true;

if (hasID && oldEnough) {
    console.log("Allowed");
}

if (hasID || oldEnough) {
    console.log("At least one condition is true");
}

if (!hasID) {
    console.log("Does not have ID");
}


// 14. SIMPLE PROGRAM
function checkAge(personAge) {
    if (personAge >= 18) {
        return "adult";
    } else {
        return "minor";
    }
}

let personName = "Alex";
let personAge = 19;

let status = checkAge(personAge);

console.log(${personName} is an ${status}.);

for (let count = 1; count <= 5; count++) {
    console.log(${personName}: ${count});
}
