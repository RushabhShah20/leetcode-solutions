// Problem: Design Spreadsheet
// Link to the problem: https://leetcode.com/problems/design-spreadsheet/
struct Spreadsheet {
    ans: std::collections::HashMap<String, i32>,
}


/**
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl Spreadsheet {
    fn new(rows: i32) -> Self {
        return Spreadsheet {
            ans: std::collections::HashMap::new(),
        };
    }

    fn set_cell(&mut self, cell: String, value: i32) {
        self.ans.insert(cell, value);
    }

    fn reset_cell(&mut self, cell: String) {
        self.ans.remove(&cell);
    }

    fn get_value(&self, formula: String) -> i32 {
        let plus_pos: usize = formula.find('+').unwrap();
        let x: &str = &formula[1..plus_pos];
        let y: &str = &formula[plus_pos + 1..];

        let x_is_digit: bool = x.chars().next().map_or(false, |c| c.is_ascii_digit());
        let y_is_digit: bool = y.chars().next().map_or(false, |c| c.is_ascii_digit());

        if !x_is_digit && !y_is_digit {
            let x_val = *self.ans.get(x).unwrap_or(&0);
            let y_val = *self.ans.get(y).unwrap_or(&0);
            x_val + y_val
        } else if !x_is_digit && y_is_digit {
            let x_val = *self.ans.get(x).unwrap_or(&0);
            let y_val = y.parse::<i32>().unwrap();
            x_val + y_val
        } else if x_is_digit && !y_is_digit {
            let x_val = x.parse::<i32>().unwrap();
            let y_val = *self.ans.get(y).unwrap_or(&0);
            x_val + y_val
        } else {
            let x_val = x.parse::<i32>().unwrap();
            let y_val = y.parse::<i32>().unwrap();
            x_val + y_val
        }
    }
}

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * let obj = Spreadsheet::new(rows);
 * obj.set_cell(cell, value);
 * obj.reset_cell(cell);
 * let ret_3: i32 = obj.get_value(formula);
 */