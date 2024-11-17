
# Evil Engine
![Evil Engine Logo](docs/misc/evil-engine-logo.png)


Evil Engine is a **retro-inspired game engine** built in C++, designed for crafting 2.5D environments reminiscent of classic titles powered by the Build Engine. The engine leverages **direct framebuffer access** for raw, low-level rendering performance on Linux systems.

## Features

- **Software Rasterizer**: Fully implemented from scratch, capable of rendering:
  - Lines and polygons
  - Textured triangles
  - Depth-buffered scenes
- **Direct Framebuffer Access**: Bypasses windowing systems for ultra-low latency rendering.
- **2.5D Graphics**: Sector-based level design with room-over-room support.
- **Custom Level Editor**: (Planned) Design maps with an intuitive GUI tool.
- **Input Handling**: Keyboard and mouse support for interactive gameplay.
- **Minimal Dependencies**: Built to run with only the Linux framebuffer.

## Getting Started

### Prerequisites

To build and run Evil Engine, ensure the following tools and libraries are installed:

- **C++ Compiler**: GCC/Clang (Linux)
- **Framebuffer Access**: Ensure `/dev/fb0` is available and accessible. You may need to run as root or configure permissions:
  ```bash
  sudo chmod a+rw /dev/fb0
  ```
- **Make** or a compatible build system.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/lvntky/evil-engine.git
   cd evil-engine
   ```

2. Build the project:
   ```bash
   make
   ```

3. Run the engine:
   ```bash
   sudo ./evil-engine
   ```

   **Note**: Root privileges may be required to access the framebuffer device.

### Running in Debug Mode

Enable debugging by building with the `DEBUG` flag:
```bash
make DEBUG=1
```

This will output detailed logs for frame rendering, input handling, and more.

## Usage

- Start the engine:
  ```bash
  sudo ./evil-engine
  ```
- For custom maps, place `.lvl` files in the `maps/` directory and load them at runtime:
  ```bash
  sudo ./evil-engine maps/my-map.lvl
  ```

## Architecture

### Core Components
- **Renderer**: Implements a software rasterizer for 2.5D scenes with direct framebuffer access.
- **Input**: Processes keyboard and mouse input using raw input APIs.
- **Physics**: (Planned) Simple 2D collision detection and response.
- **Editor**: (Planned) Integrated map editor for creating and testing levels.

### File Structure
```
evil-engine/
├── src/                # Engine source code
├── include/            # Header files
├── maps/               # Sample maps
├── assets/             # Textures, sounds, and sprites
├── editor/             # Level editor (WIP)
├── README.md           # This file
└── Makefile            # Build configuration
```

## Roadmap

- [x] Software rasterizer for basic rendering
- [x] Direct framebuffer access for output
- [ ] Texture mapping with UV interpolation
- [ ] Level editor with GUI
- [ ] Physics and collision detection
- [ ] Scripting support for custom gameplay logic

## Contributing

Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a feature branch:
   ```bash
   git checkout -b my-new-feature
   ```
3. Commit your changes and push the branch.
4. Open a pull request.

## License

Evil Engine is licensed under the MIT License. See [LICENSE](LICENSE) for more details.

---

## Screenshots

*(Add screenshots or GIFs showcasing your engine once available)*

---

## Acknowledgments

- Inspired by the **Build Engine** by Ken Silverman.
- Special thanks to the open-source community for tools and resources.
- And also one and only John Carmack

---

Happy hacking with the **Evil Engine**!😈
