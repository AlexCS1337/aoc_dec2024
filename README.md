# Advent of Code 2024 — Day Summaries

## Day 01: Historian Hysteria  
The Chief Historian is missing. Two groups of Senior Historians have compiled separate lists of “location IDs” (numbers) representing historically significant places. Your task: take the two sequences, sort each list, pair items by their rank (smallest with smallest, second-smallest with second-smallest, etc.), compute the absolute difference for each pair, and sum those differences to get the total “distance” between the lists.  
[Read on AoC »](https://adventofcode.com/2024/day/1) :contentReference[oaicite:0]{index=0}  

## Day 02: Red‑Nosed Reports  
At the Red-Nosed Reindeer nuclear plant, you receive many “reports” — each report is a line of numbers (“levels”). A report is “safe” if: (1) its levels are strictly monotonic (either strictly increasing or strictly decreasing), and (2) every adjacent pair of levels differs by at least 1 and at most 3. Count how many of the input reports are safe.  
[Read on AoC »](https://adventofcode.com/2024/day/2) :contentReference[oaicite:1]{index=1}  

## Day 03: Mull It Over  
Their computer’s memory is corrupted. You’re given a noisy dump of text, but buried inside are valid `mul(X,Y)` instructions. Extract only the well‑formed `mul` calls, compute `X * Y` for each, then sum all those products to get the answer.  
[Read on AoC »](https://adventofcode.com/2024/day/3) :contentReference[oaicite:2]{index=2}  

## Day 04: Ceres Search  
An Elf gives you a word-search grid and asks you to find **every** instance of the word `XMAS`. The words can run horizontally, vertically, diagonally, backward, and can overlap. Count how many times `XMAS` appears in all these directions.  
[Read on AoC »](https://adventofcode.com/2024/day/4) :contentReference[oaicite:3]{index=3}  

## Day 05: Print Queue  
In the printing department, there are ordering rules of the form `X|Y` ("if pages X and Y are both in an update, X must print before Y"). You’re given: (a) a list of ordering rules, and (b) several “updates,” each as a list of page numbers. For each update, determine if the pages respect all relevant rules (ignore rules involving pages not in that update). For the valid updates, find the “middle” page (median position) and sum those middle page numbers across all valid updates.  
[Read on AoC »](https://adventofcode.com/2024/day/5) :contentReference[oaicite:4]{index=4}  

## Day 06  
*(Summary placeholder — you’ll need to fill this in based on the puzzle.)*  

## Day 07  
*(Summary placeholder)*  

## Day 08  
*(Summary placeholder)*  

## Day 09  
*(Summary placeholder)*  

## Day 10  
*(Summary placeholder)*  

## Day 11  
Simulate a “blinking” process on a line of stones. Each stone has a number engraved:  
- If a stone’s number is `0`, it becomes `1` when it blinks.  
- If the stone has an **even number of digits**, the number splits into two halves (left and right).  
- Otherwise (odd number of digits, non‑zero), the number multiplies by `2024`.  
After a specified number of blinks, compute how many stones remain.  

## Day 12  
You have a grid of “garden plots,” each with a letter indicating the plant type. Adjacent (4‑direction) plots with the same letter form a region. For each region, compute:  
- its **area** (count of plots),  
- its **perimeter** (sides between the region and either empty space or other regions),  
- then its “cost” = *area × perimeter*.  
Finally, sum the cost of all regions.  

## Day 13  
*(Summary placeholder)*  

## Day 14  
*(Summary placeholder)*  

## Day 15  
*(Summary placeholder)*  

## Day 16  
*(Summary placeholder)*  

## Day 17  
*(Summary placeholder)*  

## Day 18  
*(Summary placeholder)*  

## Day 19  
*(Summary placeholder)*  

## Day 20  
There’s a “race track” grid from a start (`S`) to an end (`E`) with walls (`#`) and track (`.`). You’re allowed to “cheat” exactly once: for up to two moves, you can pass through walls (i.e., disable collision). Your goal: figure out how many cheats (and when) save **at least** a given amount of time, compared to not cheating.  

## Day 21  
*(Summary placeholder)*  

## Day 22  
*(Summary placeholder)*  

## Day 23  
*(Summary placeholder)*  

## Day 24: Crossed Wires  
You’re given a network of boolean logic gates (AND, OR, XOR) with wires carrying `0` or `1`. The input describes (a) initial values for some wires, and (b) gate definitions like `x00 AND y00 -> z00`. There are no feedback loops. After simulating the system, read off the output bits from wires named `z00`, `z01`, … (in that order) to form a binary number, then convert it to decimal. That decimal number is your answer.  
[Read on AoC »](https://adventofcode.com/2024/day/24) :contentReference[oaicite:5]{index=5}  

## Day 25: Code Chronicle  
You reach the Chief Historian’s locked office. The door uses **virtual five‑pin tumbler locks**, and you’re given “schematics” of both locks and keys in a cryptic ASCII-art format (`#` and `.`). Each column in a schematic corresponds to a pin height (for locks) or a notch height (for keys). You need to determine which key/lock pairs *could possibly fit together* (i.e., without any overlapping in their columns) and count how many valid combinations there are.  
[Read on AoC »](https://adventofcode.com/2024/day/25) :contentReference[oaicite:6]{index=6}  

---

For more detail on any day, go to the main site: [Advent of Code 2024](https://adventofcode.com/2024) :contentReference[oaicite:7]{index=7}  
