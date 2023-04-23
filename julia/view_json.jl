using JSON
using DelimitedFiles
using Base.Filesystem
using Plots

function pretty_print_json_from_file(filename::AbstractString)
    if !isfile(filename)
        println("Error: File '$filename' does not exist.")
        return
    end

    json_string = read(filename, String)
    json_data = JSON.parse(json_string)
    println(JSON.json(json_data, 4))
end

# Get command line arguments
args = collect(ARGS)

# Check if a filename is provided as a command line argument
if length(args) < 1
    println("Error: Please provide a JSON filename as a command line argument.")
else
    filename = args[1]
    pretty_print_json_from_file(filename)
end

