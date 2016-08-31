find . -name "*.sh" | cut -c3- | sed 's/.\{3\}$//';
