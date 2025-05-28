# Ratatui

TUI interface for deployment in headless applications. Additional details will be provided as the project grows.

## Build Example App

Separate build for library is still under development. The following commands build an example app implementation.

```
mkdir project && cd project
git clone git@github.com:AJQuattropani/rata-tui.git
mkdir build && cd build
cmake ../project/
cmake --build.
```

## TODO:
- Implement separate builds for library and example application.
- Handle variadic arguments passed to ncurses.
- Safely handle errors/outputs of methods from ncurses.


