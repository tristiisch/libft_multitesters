# libft_multitesters
Libft checker online on Linux and MacOS.

## How it works
Just add a pull request with your code at the root, tests will run at https://github.com/tristiisch/libft_multitesters/actions

## Reproduce this repo

If you don't want to create a pull request or login to git, you can reproduce this repo.

Add testers as submodule :
```
git submodule add https://github.com/Tripouille/libftTester.git tripouille
git submodule add https://github.com/ska42/libft-war-machine.git warmachine
```

Add theses files to your repo
https://github.com/tristiisch/libft_multitesters/tree/main/.github/workflows like this :
```
mkdir -p .github/workflows && cd .github/workflows 
wget https://raw.githubusercontent.com/tristiisch/libft_multitesters/main/.github/workflows/Norminette.yml
wget https://raw.githubusercontent.com/tristiisch/libft_multitesters/main/.github/workflows/Build.yml
wget https://raw.githubusercontent.com/tristiisch/libft_multitesters/main/.github/workflows/Tester.yml
```

Commit & Push, the next time you push or when someone wants to make a pull request to your repo, the test will be launched.
