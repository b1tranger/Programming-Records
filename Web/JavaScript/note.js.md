
# Contents
- [output methods](#output-methods)
- [input methods](#input-methods)

---
# [output methods](#contents)
Yes, there are several other printing/output methods in JavaScript besides console.log():

## Console Methods:

// Basic output
`console.log("Regular message");`

// Warning message (yellow in most browsers)
`console.warn("This is a warning!");`

// Error message (red in most browsers)
`console.error("This is an error!");`

// Info message (blue icon in some browsers)
`console.info("This is information");`

// Debug message (may be hidden by default)
`console.debug("Debug information");`

// Table format for arrays/objects
`console.table([{name: "John", age: 25}, {name: "Jane", age: 30}]);`

// Group related messages
`console.group("User Details");`
`console.log("Name: John");`
`console.log("Age: 25");`
`console.groupEnd();`

// Clear console
`console.clear();`

// Timing operations
`console.time("Timer");`
// ... some code ...
`console.timeEnd("Timer");`

// Count occurrences
`console.count("clicks");`
`console.count("clicks");`

## Browser-Specific Methods:

// Alert dialog (blocks execution)
`alert("Hello World!");`

// Prompt dialog (gets user input)
`const userInput = prompt("Enter your name:");`

// Confirm dialog (returns true/false)
`const confirmed = confirm("Are you sure?");`

// Write directly to document (not recommended)
`document.write("This writes to the page");`

// Update element content
`document.getElementById("output").textContent = "Hello!";`
`document.getElementById("output").innerHTML = "<b>Bold text</b>";`

## Node.js Methods:

// Standard output
`process.stdout.write("Hello ");`
`process.stdout.write("World\n");`

// Standard error
`process.stderr.write("Error message\n");`

// Using util.format
`const util = require('util');`
`console.log(util.format('Hello %s', 'World'));`

---

Note: console.log() is the most commonly used method for debugging and general output in JavaScript development.






# [input methods](#contents)

Here are the main syntax options for user input in JavaScript:

## Browser Environment:

// 1. prompt() - Simple text input dialog
const userName = prompt("Enter your name:");
console.log("Hello, " + userName);

// 2. prompt() with default value
const age = prompt("Enter your age:", "25");
console.log("You are " + age + " years old");

// 3. confirm() - Yes/No dialog (returns true/false)
const isReady = confirm("Are you ready to continue?");
if (isReady) {
    console.log("Let's proceed!");
} else {
    console.log("Take your time!");
}

// 4. HTML form input (more common in web apps)
// HTML: <input type="text" id="userInput" placeholder="Enter text">
// JavaScript:
const inputElement = document.getElementById('userInput');
const userValue = inputElement.value;

// 5. Event-based input handling
document.addEventListener('DOMContentLoaded', () => {
    const input = document.getElementById('userInput');
    input.addEventListener('input', (event) => {
        console.log("User typed:", event.target.value);
    });
});

## Node.js Environment:

// Using readline module
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('What is your name? ', (answer) => {
    console.log(`Hello, ${answer}!`);
    rl.close();
});

// Using process.stdin directly
process.stdin.setEncoding('utf8');
console.log('Enter some text:');
process.stdin.on('data', (data) => {
    console.log('You entered:', data.trim());
    process.exit();
});

## Modern Async/Await Pattern (Node.js):

const readline = require('readline');

function askQuestion(question) {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });
    
    return new Promise((resolve) => {
        rl.question(question, (answer) => {
            rl.close();
            resolve(answer);
        });
    });
}

async function getUserInput() {
    const name = await askQuestion('What is your name? ');
    const age = await askQuestion('What is your age? ');
    
    console.log(`Hello ${name}, you are ${age} years old!`);
}

getUserInput();

--- 

Note: For web applications, HTML forms with event listeners are preferred over prompt() for better user experience.
