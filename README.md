# Caesar Cipher 🔐

A simple implementation of the **Caesar cipher** encryption algorithm written in **C**.  
The program takes a numeric key as input and shifts each letter of the plaintext by that amount to produce the ciphertext.

## 📌 Overview
- Encrypts messages by shifting characters in the alphabet.
- Preserves uppercase and lowercase letters.
- Non-alphabetic characters (spaces, punctuation, digits) remain unchanged.
- Handles large keys using modular arithmetic (`% 26`).

## ⚙️ Usage

- **Windows (PowerShell)**
  ```powershell
  gcc -o caesar.exe caesar.c
  .\caesar.exe 3
  ```

- **macOS / Linux**
  ```bash
  gcc -o caesar caesar.c
  ./caesar 3
  ```

### Example session
```
What's the text to cypher? Hello, World!
key: 3
ciphertext: Khoor, Zruog!
```




