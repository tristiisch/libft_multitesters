# libft_multitesters
Libft checker online on Linux and MacOS. Just add a Pull request with your code.
Tests will run at https://github.com/tristiisch/libft_multitesters/actions


If you didn't want to create a pull request or login to git, you can reproduise this repo.

Add testers as submodule
```
git submodule add https://github.com/Tripouille/libftTester.git tripouille
git submodule add https://github.com/ska42/libft-war-machine.git warmachine
```

Add theses files to your repo
https://github.com/tristiisch/libft_multitesters/tree/main/.github/workflows
```
mkdir -p .github/workflows
wget https://github.com/tristiisch/libft_multitesters/blob/main/.github/workflows/Norminette.yml
wget https://github.com/tristiisch/libft_multitesters/blob/main/.github/workflows/Build.yml
wget https://github.com/tristiisch/libft_multitesters/blob/main/.github/workflows/Tester.yml
```

Commit & Push, the next time you push or when someone want to make a pull request to your repo, it will launch the test.
