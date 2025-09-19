// Problem: Design Spreadsheet
// Link to the problem: https://leetcode.com/problems/design-spreadsheet/
type Spreadsheet struct {
	ans map[string]int
}

func Constructor(rows int) Spreadsheet {
	return Spreadsheet{
		ans: make(map[string]int),
	}
}

func (this *Spreadsheet) SetCell(cell string, value int) {
	this.ans[cell] = value
}

func (this *Spreadsheet) ResetCell(cell string) {
	delete(this.ans, cell)
}

func (this *Spreadsheet) GetValue(formula string) int {
	var plusPos int = strings.Index(formula, "+")
	var x string = formula[1:plusPos]
	var y string = formula[plusPos+1:]
	var xIsDigit bool = len(x) > 0 && unicode.IsDigit(rune(x[0]))
	var yIsDigit bool = len(y) > 0 && unicode.IsDigit(rune(y[0]))
	if !xIsDigit && !yIsDigit {
		var xVal int = this.ans[x]
		var yVal int = this.ans[y]
		return xVal + yVal
	} else if !xIsDigit && yIsDigit {
		var xVal int = this.ans[x]
		yVal, _ := strconv.Atoi(y)
		return xVal + yVal
	} else if xIsDigit && !yIsDigit {
		xVal, _ := strconv.Atoi(x)
		var yVal int = this.ans[y]
		return xVal + yVal
	} else {
		xVal, _ := strconv.Atoi(x)
		yVal, _ := strconv.Atoi(y)
		return xVal + yVal
	}
}

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * obj := Constructor(rows);
 * obj.SetCell(cell,value);
 * obj.ResetCell(cell);
 * param_3 := obj.GetValue(formula);
 */
