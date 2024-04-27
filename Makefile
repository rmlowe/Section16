.PHONY: clean All

All:
	@echo "----------Building project:[ ChallengeSolution-Part1 - Debug ]----------"
	@cd "ChallengeSolution-Part1" && "$(MAKE)" -f  "ChallengeSolution-Part1.mk"
clean:
	@echo "----------Cleaning project:[ ChallengeSolution-Part1 - Debug ]----------"
	@cd "ChallengeSolution-Part1" && "$(MAKE)" -f  "ChallengeSolution-Part1.mk" clean
