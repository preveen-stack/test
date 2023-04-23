f = c => (9.0) * c / 5.0 + 32.0;
c = f => (f-32.0) * 5.0 / 9.0;

console.log("-40 deg c -> " +  c(-40.0), "deg F");
console.log("-40 deg f -> " +  f(-40.0), "deg C");
