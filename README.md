
# 🐧 Linux Shell Command Practice - CSV File Operations

This project demonstrates basic Linux commands to manipulate and explore CSV files in a shell environment. It includes file creation, content extraction, permissions, and navigation.

---

## 📋 Basic Commands

### 1. `ls`
- **Description:** Lists directory contents.
- **Usage:** 
```bash
ls
ls -ltr
ls -a
```

### 2. `cd`
- **Description:** Changes the current directory.
- **Usage:**
```bash
cd
```

---

## 📁 File Creation & Viewing

### 3. `vi`
- **Description:** A terminal-based text editor.
- **Usage:**
```bash
vi test.csv
```

### 4. `more`
- **Description:** Views file content one page at a time.
- **Usage:**
```bash
more test.csv
```

### 5. `less`
- **Description:** Like `more`, but allows backward scrolling (not installed by default).
- **Usage:**
```bash
less test.csv
```

---

## ✂️ Data Extraction

### 6. `cut`
- **Description:** Extracts specific fields/columns from files.
- **Usage:**
```bash
cut -d, -f1,2 test.csv
cut -d, -f1,3 test.csv
cut -d, -f2 test.csv
```

### 7. `head` and `tail`
- **Description:** View the top or bottom N lines of a file.
- **Usage:**
```bash
head -3 test.csv
tail -3 test.csv
```

---

## 📄 Content Redirection

### 8. `>` and `>>`
- **Description:** Redirects output to a file.
- **Usage:**
```bash
cut -d, -f1,2 test.csv > test1.csv
head -3 test.csv >> test2.csv
cut -d, -f1,2 test.csv >> test3.csv
```

---

## 🧮 Text Processing

### 9. `awk`
- **Description:** Extracts fields using pattern scanning.
- **Usage:**
```bash
awk -F, '{print $1}' test.csv
awk -F, '{print $3}' test.csv
```

### 10. `wc`
- **Description:** Counts lines, words, characters.
- **Usage:**
```bash
wc -l test1.csv
```

---

## 🔐 Permissions

### 11. `chmod`
- **Description:** Changes file permissions.
- **Usage:**
```bash
chmod 444 test.csv      # Read-only
chmod 744 test.csv      # Full for owner, read-only for others
```

---

## 🔍 Finding Files

### 12. `find`
- **Description:** Finds files by pattern.
- **Usage:**
```bash
find *.csv
```

---

## 📁 Example Files

- `test.csv`: Original file
- `test1.csv`: Extracted first and second columns
- `test2.csv`: Appended top 3 rows
- `test3.csv`: Appended selected columns

---


