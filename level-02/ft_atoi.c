int	ft_atoi(const char *str)
{
	int	i = 0;
	int	neg_flag = 0;
	int	result = 0;

	while (str[i])
	{
		result *= 10; 
		if (str[i] == '-' && !(neg_flag)) 
			neg_flag = 1;
		if (str[i] >= '0' && str[i] <= '9') 
            result += str[i] - '0'; 
		i++;
	}
	if (neg_flag)
		return (result * -1);
	return (result);
}
