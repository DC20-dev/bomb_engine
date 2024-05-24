use std::{env::args, fmt::Display, error::Error};
use std::env;
mod header_tool;

fn main() -> Result<(), anyhow::Error> {
    println!("Working Directory: {:?}",env::current_dir().unwrap());
    let args = args();
    if args.len() <= 1 {
        let error = anyhow::anyhow!(ArgsError);
        return Err(error);
    }
    let args: Vec<String> = args.collect();

    let header_tool = header_tool::HeaderTool::new();
    return header_tool.run(&args[1..]);
}

#[derive(Debug, Clone)]
struct ArgsError;

impl Display for ArgsError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "No headers were passed!")
    }
}

impl Error for ArgsError {
    fn description(&self) -> &str {
        "No headers were passed!"
    }
}