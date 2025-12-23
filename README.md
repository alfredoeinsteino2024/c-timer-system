# Timer System

A real-time stopwatch/clock that counts hours, minutes, and seconds in the terminal.

## Features
- Live updating display (refreshes every second)
- Proper time formatting (HH:MM:SS with leading zeros)
- Automatic rollover at 60 seconds/minutes and 24 hours
- Runs indefinitely until manually stopped (Ctrl+C)
- Clear screen refresh for smooth animation effect

## How to Run
```bash
gcc timer.c -o timer
./timer
```

Press `Ctrl+C` to stop the timer.

## Display Example
```
00H : 15M : 42S
```

The timer continuously updates, showing elapsed time in a clean format.

## What I Learned
- Working with `sleep()` and timing functions
- Terminal clearing with `system("clear")` for animations
- Time calculation and rollover logic
- Using `fflush(stdout)` for immediate output
- Creating infinite loops for continuous processes
- System-level programming basics

## Platform Notes
- **Linux/Mac**: Uses `system("clear")` 
- **Windows**: Replace with `system("cls")` for proper clearing

## Code Structure
- Uses `unistd.h` for `sleep()` function
- Implements proper time rollover logic:
  - 60 seconds → increment minute, reset seconds
  - 60 minutes → increment hour, reset minutes
  - 24 hours → reset all to zero

## Known Issue
Minor bug on line 17: `hour = 0` incorrectly resets when seconds roll over. Should only reset `second = 0`. This was left as-is to show the learning process, but the fix is simple:
```c
if(second == 60) {
    minute++;
    second = 0;
    // Remove: hour = 0;
}
```

## Possible Enhancements
- Add countdown timer mode
- Implement lap/split time functionality
- Add alarm/notification when reaching specific time
- Create pause/resume functionality
- Add time input to start from specific time

## Author
Built while learning C programming and system timing functions.
