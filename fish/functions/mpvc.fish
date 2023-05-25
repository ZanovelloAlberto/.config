


function mpvc 
	command echo "$argv[1..]" | socat - $MPV_SOCK

end
