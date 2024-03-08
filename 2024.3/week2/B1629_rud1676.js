const input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "./input.txt")
  .toString()
  .trim()
  .split("\n");

const [a, b, c] = input.shift().split(" ").map(BigInt);

const mul = (m) => {
  if (m === 1n) return a % c;
  let ret = mul(m / 2n) % c;
  if (m % 2n === 1n) return (ret * ret * (a % c)) % c;
  else return (ret * ret) % c;
};

console.log(mul(b).toString());
