const fs = require('fs');
const acorn = require('acorn');

// Read the JavaScript file
const code = fs.readFileSync('example.js', 'utf8');

// Parse the code and generate the AST
const ast = acorn.parse(code, { ecmaVersion: 2021, sourceType: 'module' });

// Print the AST to the console
console.log(JSON.stringify(ast, null, 2));
