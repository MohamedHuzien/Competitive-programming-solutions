package main

import "fmt"

func main() {
	var n, m int32
	fmt.Scan(&n, &m)

	var result int32
	if n%2 == 0 {
		result = n / 2 * m
	} else {
		result = (n-1)/2*m + (m / 2)
	}

	fmt.Println(result)
}
