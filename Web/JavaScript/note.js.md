
# Contents
- [output methods](#output-methods)

---
# [output methods](#contents)
Yes, there are several other printing/output methods in JavaScript besides console.log():

# Console Methods:

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
`console.group("User Details");
console.log("Name: John");
console.log("Age: 25");
console.groupEnd();`

// Clear console
`console.clear();`

// Timing operations
`console.time("Timer");`
// ... some code ...
`console.timeEnd("Timer");`

// Count occurrences
`console.count("clicks");`
`console.count("clicks");`

# Browser-Specific Methods:

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

# Node.js Methods:

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
