package main

import "fmt"

func main() {

	var n, numbr_of_problems, flag, know int
	numbr_of_problems = 0
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		flag = 0
		for j := 0; j < 3; j++ {
			fmt.Scan(&know)
			if know == 1 {
				flag++
				if flag == 2 {
					numbr_of_problems++

				}
			}

		}
	}

	fmt.Println(numbr_of_problems)
}
