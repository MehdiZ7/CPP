# CPP Modules (CPP00 → CPP08)

[![C++](https://img.shields.io/badge/language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Build](https://img.shields.io/badge/build-Makefile-informational)](#build--run)
[![42](https://img.shields.io/badge/School-42-black)](https://42.fr/)
[![License](https://img.shields.io/badge/license-MIT-success)](#license)
[![Status](https://img.shields.io/badge/status-in%20progress-yellow)](#)

A curated, professional showcase of my **C++ learning journey** through the classic 42 C++ modules. Each module contains a set of incremental exercises focusing on core OOP concepts, memory management, templates, STL, and more.

> **Repository:** `MehdiZ7/CPP`

---

## Table of Contents

- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Modules & Exercises](#modules--exercises)
  - [CPP00](#cpp00)
  - [CPP01](#cpp01)
  - [CPP02](#cpp02)
  - [CPP03](#cpp03)
  - [CPP04](#cpp04)
  - [CPP05](#cpp05)
  - [CPP06](#cpp06)
  - [CPP07](#cpp07)
  - [CPP08](#cpp08)
- [Build & Run](#build--run)
- [Coding Standards](#coding-standards)
- [Notes](#notes)
- [License](#license)

---

## Overview

This repository contains solutions for **CPP00 to CPP08** modules. The goal is to progressively master modern C++ fundamentals:

- Classes, member functions, constructors/destructors
- Encapsulation, inheritance, polymorphism
- Operator overloading
- Canonical form (Rule of Three / Five)
- Exceptions
- Templates
- STL containers and algorithms

---

## Repository Structure

Each module is a directory:

- `CPP00/`, `CPP01/`, ... `CPP08/`

Inside a module, each exercise lives in its own folder:

- `ex00/`, `ex01/`, ...

---

## Modules & Exercises

### CPP00

Intro to C++ basics: namespaces, classes, member functions, std::string, iostreams.

- `CPP00/ex00`
- `CPP00/ex01`
- `CPP00/ex02`

### CPP01

Memory allocation, references, pointers, file streams, and basic class design.

- `CPP01/ex00`
- `CPP01/ex01`
- `CPP01/ex02`
- `CPP01/ex03`
- `CPP01/ex04`
- `CPP01/ex05`
- `CPP01/ex06`

### CPP02

Operator overloading, fixed-point arithmetic, and orthodox canonical form.

- `CPP02/ex00`
- `CPP02/ex01`
- `CPP02/ex02`
- `CPP02/ex03`

### CPP03

Inheritance fundamentals, base/derived classes, and early polymorphism patterns.

- `CPP03/ex00`
- `CPP03/ex01`
- `CPP03/ex02`
- `CPP03/ex03`

### CPP04

Subtype polymorphism, abstract classes, interfaces, and deep copies.

- `CPP04/ex00`
- `CPP04/ex01`
- `CPP04/ex02`
- `CPP04/ex03`

### CPP05

Exceptions and more advanced class interactions.

- `CPP05/ex00`
- `CPP05/ex01`
- `CPP05/ex02`
- `CPP05/ex03`

### CPP06

Type casting in C++ (static/dynamic/reinterpret/const), serialization, and conversions.

- `CPP06/ex00`
- `CPP06/ex01`
- `CPP06/ex02`

### CPP07

Templates and generic programming (functions, classes, iterators).

- `CPP07/ex00`
- `CPP07/ex01`
- `CPP07/ex02`

### CPP08

STL containers/algorithms, iterators, and more advanced standard library usage.

- `CPP08/ex00`
- `CPP08/ex01`
- `CPP08/ex02`

---

## Build & Run

Most exercises are built with `make`.

```bash
# Example: build CPP03 exercise 02
cd CPP03/ex02
make

# Run (binary name may vary per exercise)
./your_binary

# Clean
make clean
make fclean
make re
```

> If an exercise provides a specific executable name or arguments, check its local `Makefile` and source files.

---

## Coding Standards

- No external dependencies (standard C++ only)
- Modules are designed to compile with `c++` and classic 42 flags (typically `-Wall -Wextra -Werror`)
- Emphasis on readability, correctness, and proper resource management

---

## Notes

- These projects are educational. If you spot an improvement opportunity (performance, readability, safety), feel free to open an issue or PR.

---

## License

This repository is shared for learning and portfolio purposes.

- If you want a formal license: add a `LICENSE` file (MIT recommended) and update the badge above accordingly.
