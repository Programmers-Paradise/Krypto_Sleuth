use std::io;

fn main() {
    println!("Enter the word to be deciphered = ");
    let mut lines = Vec::new();

    loop {
        let mut line = String::new();
        io::stdin().read_line(&mut line)
            .expect("Failed to read line");
        let line = line.trim().to_string();
        
        if !line.is_empty() {
            lines.push(line);
        } else {
            break;
        }
    }

    let b = lines.join("\n");

    println!("Enter shift value=");
    let mut shift = String::new();
    io::stdin().read_line(&mut shift)
        .expect("Failed to read line");
    let shift: i32 = shift.trim().parse()
        .expect("Please enter a valid integer");

    let mut l2 = Vec::new();

    for c in b.chars() {
        let mut x = c as i32;
        if (64 < x && x < 91) {
            if x + shift > 90 {
                x = x + shift - 26;
                l2.push(x);
            } else if x + shift < 65 {
                x = x + shift + 26;
                l2.push(x);
            } else {
                l2.push(x + shift);
            }
        } else if (96 < x && x < 123) {
            if x + shift > 122 {
                x = x + shift - 26;
                l2.push(x);
            } else if x + shift < 97 {
                x = x + shift + 26;
                l2.push(x);
            } else {
                l2.push(x + shift);
            }
        } else {
            l2.push(x);
        }
    }

    for c in l2 {
        print!("{}", c as u8 as char);
    }
}
