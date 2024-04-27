.PHONY: clean All

All:
	@echo "----------Building project:[ ChallengeSolution-Part2 - Debug ]----------"
	@cd "ChallengeSolution-Part2" && "$(MAKE)" -f  "ChallengeSolution-Part2.mk"
clean:
	@echo "----------Cleaning project:[ ChallengeSolution-Part2 - Debug ]----------"
	@cd "ChallengeSolution-Part2" && "$(MAKE)" -f  "ChallengeSolution-Part2.mk" clean
