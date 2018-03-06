package main

import "fmt"

func main() {

	var n, m, a int64
	fmt.Scan(&n, &m, &a)

	var inHight = n / a
	if inHight*a != n {
		inHight++
	}

	var inWidth = m / a
	if inWidth*a != m {
		inWidth++
	}

	fmt.Println(inHight * inWidth)

}
