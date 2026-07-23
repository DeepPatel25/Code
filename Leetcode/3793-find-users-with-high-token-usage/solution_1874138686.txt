with cte as (
    select user_id, count(prompt) over(partition by user_id) prompt_count, 
        round(avg(tokens) over (partition by user_id), 2) avg_tokens,
        max(tokens) over(partition by user_id) max_tokens
    from prompts
)
select distinct user_id, prompt_count, avg_tokens
from cte
where prompt_count > 2 and max_tokens > avg_tokens
order by avg_tokens desc, user_id;