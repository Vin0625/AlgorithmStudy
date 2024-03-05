const input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "./input.txt")
  .toString()
  .trim()
  .split("\n");

const nums = input.map(Number);
const result = [];
const sarr = [];
let sum = 0;
for (let n of nums) {
  sum += n;
  sarr.push(sum);
}

for (let i = 0; i < 8; i++) {
  for (let j = i + 1; j < 9; j++) {
    let a = 0;

    if (i > 0) a += sarr[i - 1]; // 왼쪽구간
    a += sarr[j - 1] - sarr[i]; // 가운데 구간
    if (j < 8) a += sarr[8] - sarr[j]; // 오른쪽 구간
    if (a === 100) {
      for (let k = 0; k < 9; k++) {
        if (k === i || k === j) continue;
        result.push(nums[k]);
      }
      result.sort((a, b) => a - b).map((v) => console.log(v));
      return;
    }
  }
}
