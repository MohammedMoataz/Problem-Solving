function isValid(s: string): boolean {
    const stack = []

    for (let i = 0; i < s.length; i++) {
        let temp = stack[stack.length - 1] || null
        let ch = s.slice(i, i + 1)

        if ((temp === '(' && ch === ')') || (temp === '{' && ch === '}') || (temp === '[' && ch === ']'))
            stack.pop()
        else
            stack.push(ch)
    }

    return stack.length === 0
}