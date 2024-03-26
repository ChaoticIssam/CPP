ADD = git add
COMMIT = git commit -m
PUSH = git push
PULL = git pull
STASH = git stash
push:
	$(ADD) .
	$(COMMIT) "update"
	$(PUSH)
pull:
	$(PULL)
stash:
	$(STASH)