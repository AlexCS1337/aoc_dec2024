const fs = require("fs");

class Utils {
  constructor() {
    this.fs = fs;
  }

  openFile(path) {
    const contents = this.fs.readFileSync(path, "utf8");
    return this.splitLines(conents);
  }

  splitLines(contents) {
    return contents.split("\n").map((l) => l.trim());
  }
}

module.exports = new Utils();
