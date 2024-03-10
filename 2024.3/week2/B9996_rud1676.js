const input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "./input.txt")
  .toString()
  .trim()
  .split("\n");

// 입력이 양 끝에 공백이 온다면 반드시 trim() 지워줄것

const [n] = input.shift().split().map(Number);
const [left, right] = input.shift().split("*");

for (let i = 0; i < n; i++) {
  let check = input[i];
  const a = check.substring(0, left.length);
  check = check.substring(a.length);
  const b = check.substring(check.length - right.length, check.length);
  if (a === left && b === right) {
    console.log("DA");
  } else {
    console.log("NE");
  }
}
