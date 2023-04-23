const input = ['apple', 'banana', 'orange', 'pear'];
const dict = input.reduce((acc, item, index) => {
  return { ...acc, [index]: item };
}, {});

console.log(dict);
// Output: { '0': 'apple', '1': 'banana', '2': 'orange', '3': 'pear' }
