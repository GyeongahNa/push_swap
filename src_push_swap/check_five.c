#include "push_swap.h"

void first_case(int *arr, int t_idx, int s_idx, int f_idx)
{
	if (arr[0] < arr[t_idx])
	{
		if (arr[1] > arr[t_idx] && arr[1] < arr[s_idx])
			ft_puts("ra\npa\nra\nra\nra\npa\n");
		else if (arr[1] > arr[s_idx] && arr[1] < arr[f_idx])
			ft_puts("rra\npa\nra\nra\npa\n");
		else if (arr[1] > arr[f_idx])
			ft_puts("pa\nra\npa\n");
		else if (arr[1] < arr[0])
			ft_puts("pa\nra\npa\nrra\n");
		else if (arr[1] > arr[0] && arr[1] < arr[t_idx])
			ft_puts("pa\npa\n");
	}
}

void second_case(int *arr, int t_idx, int s_idx, int f_idx)
{
    if (arr[0] > arr[t_idx] && arr[0] < arr[s_idx])
	{
		if (arr[1] < arr[t_idx])
			ft_puts("pa\nra\nra\npa\nrra\nrra\n");
		else if (arr[1] > arr[s_idx] && arr[1] < arr[f_idx])
			ft_puts("rra\npa\nrra\npa\nrra\n");
		else if (arr[1] > arr[f_idx])
			ft_puts("pa\nra\nra\npa\nrra\n");
		else if (arr[1] > arr[t_idx] && arr[1] < arr[0])
			ft_puts("ra\npa\nra\npa\nrra\nrra\n");
		else if (arr[1] > arr[0] && arr[1] < arr[s_idx])
			ft_puts("ra\npa\npa\nrra\n");
	}

}

void third_case(int *arr, int t_idx, int s_idx, int f_idx)
{
    if (arr[0] > arr[s_idx] && arr[0] < arr[f_idx])
	{
		if (arr[1] < arr[t_idx])
			ft_puts("pa\nrra\npa\nra\nra\n");
		else if (arr[1] > arr[t_idx] && arr[1] < arr[s_idx])
			ft_puts("ra\npa\nra\nra\npa\nra\nra\n");
		else if (arr[1] > arr[f_idx])
			ft_puts("pa\nrra\npa\nrra\nrra\n");
		else if (arr[1] > arr[s_idx] && arr[1] < arr[0])
			ft_puts("rra\npa\nra\npa\nra\nra\n");
		else if (arr[1] > arr[0] && arr[1] < arr[f_idx])
			ft_puts("rra\npa\npa\nrra\nrra\n");
	}

}

void fourth_case(int *arr, int t_idx, int s_idx, int f_idx)
{
    if (arr[0] > arr[f_idx])
	{
		if (arr[1] < arr[t_idx])
			ft_puts("pa\npa\nra\n");
		else if (arr[1] > arr[t_idx] && arr[1] < arr[s_idx])
			ft_puts("ra\npa\nrra\npa\nra\n");
		else if (arr[1] > arr[s_idx] && arr[1] < arr[f_idx])
			ft_puts("rra\npa\nra\nra\npa\nra\n");
		else if (arr[1] > arr[f_idx] && arr[1] < arr[0])
			ft_puts("pa\nra\npa\nra\n");
		else if (arr[1] > arr[0])
			ft_puts("pa\npa\nra\nra\n");
	}
}

int	check_five(int *arr)
{
	int f_idx;
	int s_idx;
	int t_idx;

	f_idx = get_first_idx(arr);
	s_idx = get_second_idx(arr);
	t_idx = get_third_idx(arr);
	ft_puts("pb\npb\n");
	check_three(arr, 2, 3, 4);
    first_case(arr, t_idx, s_idx, f_idx);
    second_case(arr, t_idx, s_idx, f_idx);
    third_case(arr, t_idx, s_idx, f_idx);
    fourth_case(arr, t_idx, s_idx, f_idx);
	return (1);
}