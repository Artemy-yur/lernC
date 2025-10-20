package main

import "fmt"
import "time"
import "os"


func main() {
	date := time.Now().Format("2006-01-02 15:04:05")
	fmt.Println(date)
	if time.Now().Hour() < 12 {
		fmt.Println("Good morning")
	} else if date.Hour() < 18 {
		fmt.Println("Good afternoon")
	} else {
		fmt.Println("Good evening")
	}
	os.Create("file.txt")
	os.WriteFile("file.txt", []byte(date.Format("2006-01-02 15:04:05")), 0644)
	os.ReadFile("file.txt")
	fmt.Println(string(data))
	os.Remove("file.txt")
	return CLOSE;
}