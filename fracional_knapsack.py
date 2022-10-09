
def knapsack(profits: list, weights: list, max_weight: int) -> int:
    """
    :param profits: Take a list of profits
    :param weights: Take a list of weight if bags corresponding to the profits
    :param max_weight: Maximum weight that could be carried
    """
    
    if max_weight <= 0:
        raise ValueError("max_weight must be greater than zero.")
    if len(profits) != len(weights):
        raise ValueError("The length of profits and weights must be same.")
    if any(p < 0 for p in profits):
        raise ValueError("Profit can not be negative.")
    if any(w < 0 for w in weights):
        raise ValueError("Weight can not be negative.")
    
    
    pw_ratios = [p / w for p, w in zip(profits, weights)]


    sorted_pw_ratios = sorted(pw_ratios, reverse=True)

    length = len(sorted_pw_ratios)
    limit = 0
    gain = 0
    i = 0
    
    while limit <= max_weight and i < length:
        
        biggest_pw_ratio = sorted_pw_ratios[i]
        
        
        index = pw_ratios.index(biggest_pw_ratio)
        pw_ratios[index] = -1

        if max_weight - limit >= biggest_pw_ratio:
            limit += biggest_pw_ratio
            gain += 1 * profits[index]
        else:
            gain += (max_weight - limit) / weights[index] * profits[index]
            break
        i += 1
    return gain


if __name__ == "__main__":
    print(
        "Input profits, weights, and then max_weight (all positive ints) separated by "
        "spaces."
    )

    profits = [int(x) for x in input("Input profits separated by spaces: ").split()]
    weights = [int(x) for x in input("Input weights separated by spaces: ").split()]
    max_weight = int(input("Max weight allowed: "))

    gained = knapsack(profits, weights, max_weight)
    print("The maxmium profit by greedy approach could be", gained)
