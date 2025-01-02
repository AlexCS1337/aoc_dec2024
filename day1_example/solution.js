const utils = require("../utils");

async function part1() {
  const contents = utils.openFile("./sample.txt");
  console.log("contents =", contents);
}

part1();

function part2() {}

module.exports = {
  part1,
  part2,
};
