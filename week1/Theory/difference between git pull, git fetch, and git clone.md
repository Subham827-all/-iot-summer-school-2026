# Q9. Difference Between `git pull`, `git fetch`, and `git clone`

## Introduction

Git provides several commands for working with remote repositories. The commands `git clone`, `git fetch`, and `git pull` are commonly used to download and synchronize code, but each serves a different purpose.

---

## 1. `git clone`

### Purpose

`git clone` is used to create a complete copy of a remote repository on your local computer.

### What it does

* Downloads the entire repository, including all files and commit history.
* Creates a new local repository.
* Automatically connects the remote repository as `origin`.

### Syntax

```bash
git clone https://github.com/username/iot-summer-school-2026.git
```

### When to use

Use `git clone` when you are working with a repository for the first time and need to create a local copy.

---

## 2. `git fetch`

### Purpose

`git fetch` downloads the latest changes from the remote repository without modifying your current branch.

### What it does

* Downloads new commits, branches, and tags.
* Updates the remote-tracking branches.
* Does not merge changes into your working branch.

### Syntax

```bash
git fetch origin
```

### When to use

Use `git fetch` when you want to check for updates and review changes before merging them into your local branch.

---

## 3. `git pull`

### Purpose

`git pull` updates your current branch by downloading and merging changes from the remote repository.

### What it does

* Performs a `git fetch`.
* Automatically merges the downloaded changes into the current branch.
* Updates your local repository with the latest remote version.

### Syntax

```bash
git pull origin main
```

### When to use

Use `git pull` when you want to synchronize your local branch with the latest changes from the remote repository.

---

## Comparison Table

| Command     | Purpose                                                     | Downloads Changes | Merges Changes | Typical Use                         |
| ----------- | ----------------------------------------------------------- | ----------------- | -------------- | ----------------------------------- |
| `git clone` | Creates a local copy of a remote repository                 | Yes               | Not applicable | First time downloading a repository |
| `git fetch` | Retrieves remote updates without changing local files       | Yes               | No             | Review updates before merging       |
| `git pull`  | Downloads and merges remote changes into the current branch | Yes               | Yes            | Keep the local branch up to date    |

---

## Conclusion

* **`git clone`** is used to download a repository for the first time.
* **`git fetch`** is used to retrieve the latest changes without affecting your current work.
* **`git pull`** is used to download and merge the latest changes into your current branch.

Understanding the difference between these commands helps developers manage repositories efficiently and collaborate effectively in software development projects.
