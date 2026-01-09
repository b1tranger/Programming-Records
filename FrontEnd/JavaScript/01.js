// Variables and data types
const name = "John Doe";
let age = 25;
let isStudent = true;
const hobbies = ["reading", "coding", "gaming"];

// Object
const person = {
    name: name,
    age: age,
    isStudent: isStudent,
    hobbies: hobbies,
    
    // Method
    introduce: function() {
        return `Hi, I'm ${this.name}, ${this.age} years old.`;
    },
    
    // Arrow function method
    addHobby: (hobby) => {
        hobbies.push(hobby);
    }
};

// Function declaration
function calculateAge(birthYear) {
    const currentYear = new Date().getFullYear();
    return currentYear - birthYear;
}

// Arrow function
const greet = (name) => `Hello, ${name}!`;

// Array methods
const numbers = [1, 2, 3, 4, 5];
const doubledNumbers = numbers.map(num => num * 2);
const evenNumbers = numbers.filter(num => num % 2 === 0);

// Conditional statements
if (age >= 18) {
    console.log("You are an adult");
} else {
    console.log("You are a minor");
}

// Loop
for (let i = 0; i < hobbies.length; i++) {
    console.log(`Hobby ${i + 1}: ${hobbies[i]}`);
}

// Modern loop
hobbies.forEach((hobby, index) => {
    console.log(`${index + 1}. ${hobby}`);
});

// Promise example
const fetchData = () => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("Data fetched successfully!");
        }, 1000);
    });
};

// Async/await
async function getData() {
    try {
        const data = await fetchData();
        console.log(data);
    } catch (error) {
        console.error("Error:", error);
    }
}

// Event handling (for browser)
document.addEventListener('DOMContentLoaded', () => {
    console.log("DOM is ready!");
});

// Output examples
console.log(person.introduce());
console.log(greet(name));
console.log("Doubled numbers:", doubledNumbers);
console.log("Even numbers:", evenNumbers);
getData();