# ⭐ Moving Star with Crescent Moon in C++

> A C++ graphics program using the **BGI (Borland Graphics Interface)** library that animates a moving star (bouncing yellow circle) with a static crescent moon.

---

## 📋 Overview

This program demonstrates **basic animation and graphics primitives** using the BGI library. A yellow star moves horizontally across the screen, bouncing off the edges, while a static crescent moon remains in the background.

**Key Concepts:**
- **Animation Loop:** Continuously updates the star's position and redraws the scene.
- **Crescent Effect:** A black circle partially overlays the white moon to create a crescent shape.
- **Collision Detection:** The star bounces off the screen boundaries.
- **Graphics Primitives:** `fillellipse`, `setcolor`, `setfillstyle`.

---

## ✨ Features

- ✅ Static crescent moon in the background
- ✅ Moving star with bouncing effect (horizontal)
- ✅ Smooth animation with `delay()` control
- ✅ Press any key to exit the animation
- ✅ Clean and well-commented implementation
- ✅ Beginner-friendly with proper comments

---

## ⏱️ Complexity Analysis

| Measure | Value |
| :---: | :--- |
| **Time Complexity** | O(frames) – Constant time per frame. |
| **Space Complexity** | O(1) – No extra memory used. |

---

## 💻 Sample Output

- A black sky with a crescent moon in the center.
- A yellow star bouncing horizontally from left to right.
- The animation continues until a key is pressed.

---

## 🧮 Program Logic & Execution Flow

### 1. **Initialization**
- Sets up the graphics window using `initgraph()`.
- Defines star properties: starting position `(100, 100)` and speed `dx = 3`.

### 2. **Animation Loop**
- Runs while no key is pressed (`!kbhit()`).
- Clears the screen using `cleardevice()`.
- Draws the scene:
  - **Crescent Moon:** White circle at `(300, 200)` radius 80, overlaid with a black circle at `(330, 200)` radius 70.
  - **Moving Star:** Yellow circle at `(starX, starY)` radius 20.
- Updates the star position: `starX += dx`.
- If `starX > getmaxx() - 20` or `starX < 20`, reverses the direction `dx = -dx`.
- Adds a delay (`delay(60)`) to control frame rate.

### 3. **Exit**
- Closes the graphics window using `closegraph()`.

---

## 🛠️ How to Compile and Run (Windows Only)

### 🪟 For Windows Users (Using Turbo C++ / WinBGIm)

#### Option 1: Using Turbo C++ (Old School)
1. Open Turbo C++.
2. Create a new file and paste the code.
3. Go to **Options → Linker → Libraries** and enable the Graphics library.
4. Compile and run (Ctrl+F9).

#### Option 2: Using WinBGIm (Modern Windows)
1. Download WinBGIm from: http://winbgim.codecutter.org/
2. Install and set up the library in your compiler.
3. Compile with:
   ```bash
   g++ -std=c++11 moving_star.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
Run: moving_star.exe

📂 Project Structure

cpp-moving-star-graphics/
│
├── moving_star.cpp   # Main source code file
└── README.md         # Project documentation (this file)
🔍 Real-World Applications
Educational Projects: Teaching graphics programming and animation.

Game Development: Basic sprite animation and movement.

UI/UX Prototyping: Demonstrating moving elements and transitions.

Screen Savers: Simple night sky screensaver.

🧠 Key Learnings
Crescent Effect: Overlaying a black circle on a white circle creates a crescent shape.

Animation Loop: The game loop pattern (update → render → delay).

Collision Detection: Checking screen boundaries and reversing direction.

Scene Composition: Drawing multiple elements (moon + star) together.

Frame Control: delay() determines the animation speed.

🔧 Potential Enhancements
Shooting Stars: Add shooting stars that streak across the sky.

Multiple Stars: Add more stars with different colors and speeds.

Vertical Movement: Add dy for diagonal bouncing.

User Control: Allow the user to change speed using arrow keys.

Cross-Platform: Use SDL, SFML, or OpenGL for portability.

⚠️ Important Notes
This program is Windows-only due to the BGI library dependency.

For Turbo C++ users: You may need to adjust the graphics driver and mode.

For modern compilers: WinBGIm is recommended.

The graphics functions may not work directly on Linux/macOS.

👩‍💻 Author
Iqra Maqsood Mughal
C++ Developer | Programming Enthusiast

📅 Date
August 6, 2026

📄 License
This project is open-source and intended for educational purposes.
